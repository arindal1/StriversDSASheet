#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

struct Element {
    int value;
    int frequency;

    Element(int val, int freq) : value(val), frequency(freq) {}
};

struct ElementComparator {
    bool operator()(const Element& a, const Element& b) {
        if (a.frequency == b.frequency) {
            return a.value < b.value;  // Larger value given preference if frequency is equal
        }
        return a.frequency < b.frequency;  // Higher frequency given preference
    }
};

std::vector<int> topKFrequentElements(const std::vector<int>& arr, int k) {
    std::unordered_map<int, int> freqMap;
    std::priority_queue<Element, std::vector<Element>, ElementComparator> pq;

    // Count the frequencies of elements
    for (int num : arr) {
        freqMap[num]++;
    }

    // Add elements to the priority queue
    for (const auto& pair : freqMap) {
        pq.push(Element(pair.first, pair.second));
        if (pq.size() > k) {
            pq.pop();
        }
    }

    // Extract the top K elements from the priority queue
    std::vector<int> topKElements;
    while (!pq.empty()) {
        topKElements.push_back(pq.top().value);
        pq.pop();
    }

    // Reverse the order to get elements in descending frequency
    std::reverse(topKElements.begin(), topKElements.end());

    return topKElements;
}

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 5};
    int k = 2;

    std::vector<int> topKElements = topKFrequentElements(arr, k);

    std::cout << "Top " << k << " elements with highest frequency: ";
    for (int num : topKElements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
