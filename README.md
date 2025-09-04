# Huffman_Code_Generator
C++ implementation of Huffman coding for lossless text compression. Includes building Huffman trees with a heap-based priority queue, serializing/deserializing trees, and compressing/decompressing strings.

## 📌 Overview
This project implements **Huffman coding** in C++ for **lossless text compression**. It generates variable-length prefix codes based on character frequencies, compresses input strings, and supports full decompression by serializing and deserializing the Huffman tree.

## ✨ Features
- Build Huffman trees using a **custom heap-based priority queue**  
- **Compress** input strings into binary-like prefix codes  
- **Serialize** the Huffman tree into a string (post-order traversal)  
- **Deserialize** trees to enable full **decompression**  
- Support for testing with multiple sample strings (e.g., Turing, Dijkstra, Wikipedia, Constitution)

## 🛠️ Files
- `HeapQueue.hpp` – Heap-based priority queue implementation  
- `HuffmanBase.hpp` / `HuffmanBase.cpp` – Abstract base class and implementation of Huffman coding  
- `PP3Test.cpp` – Main test driver  
- `TestStrings.hpp` – Sample strings for testing compression  
- `catch.hpp` – Testing framework  

## 🚀 How It Works
1. Count character frequencies and store them in a map.  
2. Build a priority queue of Huffman nodes.  
3. Construct the Huffman tree by merging nodes.  
4. Generate prefix codes (0 = left, 1 = right).  
5. Replace characters in the input with their Huffman codes.  
6. Serialize the tree for decompression.  
7. Decompress by deserializing the tree and decoding the input.  

## 🔍 Example
```cpp
HuffmanTreeBase t;
std::string input = "hello world";
std::string code = t.compress(input);
std::string tree = t.serializeTree();
std::string original = t.decompress(code, tree);
```

- **Input:** `hello world`  
- **Compressed Code (example):** `0100110...`  
- **Serialized Tree:** `LhLeB$L o...`  
- **Decompressed Output:** `hello world`  

## 🧪 Testing
Compile and run using:
```bash
g++ -std=c++11 -o huffman PP3Test.cpp HuffmanBase.cpp
./huffman
```

## 📖 References
- [Huffman Coding - Wikipedia](https://en.wikipedia.org/wiki/Huffman_coding)  
- [David Huffman’s 1952 Paper](http://compression.ru/download/articles/huff/huffman_1952_minimum-redundancy-codes.pdf)  
