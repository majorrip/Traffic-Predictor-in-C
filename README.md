# 🚦 Static Traffic Predictor in C

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Environment](https://img.shields.io/badge/Environment-CLI-lightgrey.svg)
![Topics](https://img.shields.io/badge/Topic-Routing%20%7C%20File%20I%2FO-green.svg)

## 📌 Project Overview
The **Traffic Predictor** is a command-line-based static routing application written entirely in C. It is designed to act as a rudimentary navigation system. By inputting your current location, desired destination, day of the week, and time of day, the program calculates and suggests the optimal route. 

This project serves as an exploration of foundational programming concepts, specifically focusing on complex decision trees (if-else networking) and file-system data retrieval in C.

## ✨ Key Features
* **Interactive CLI:** A simple and intuitive command-line interface for user inputs.
* **Static Data Routing:** Reads and retrieves route information stored locally in structured text files (`Trafficdata.txt`).
* **Time-Aware Suggestions:** Factors in the day and time to simulate traffic conditions and suggest the best possible path.
* **Lightweight:** Pure C implementation with zero external dependencies.

## 📁 Repository Structure
```text
Traffic-Predictor-in-C/
│
├── main.c                     # Core application logic and decision trees
├── Trafficdata.txt            # Static database containing route and traffic information
├── Traffic predictor.cbp      # Code::Blocks project file
├── Traffic predictor.depend   # Code::Blocks dependency file
├── Traffic predictor.layout   # Code::Blocks layout file
└── README.md                  # Project documentation
```

🛠️ Compilation and Usage
Prerequisites
You need a C compiler (like gcc) installed on your system. Alternatively, you can open the project directly in the Code::Blocks IDE using the .cbp file.

How to Run (via Terminal)
Clone the repository:

Bash
git clone [https://github.com/majorrip/Traffic-Predictor-in-C.git](https://github.com/majorrip/Traffic-Predictor-in-C.git)
cd Traffic-Predictor-in-C
Compile the source code:

Bash
gcc main.c -o traffic_predictor
Execute the program:

Bash
./traffic_predictor
(If on Windows, run traffic_predictor.exe)

Follow the on-screen prompts: Enter your starting point, destination, day, and time as requested by the terminal.

🚀 Future Roadmap & AI/ML Integration
While this project currently relies on static logic and predefined text data, it lays the groundwork for more advanced systems. Future iterations could involve:

Dynamic Graph Algorithms: Replacing the if-else network with Dijkstra's or A* pathfinding algorithms.

Machine Learning Integration: Moving away from static text files and using predictive ML models (like Graph Neural Networks) to forecast traffic congestion dynamically based on historical data.
