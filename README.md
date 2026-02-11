# AssaultCube Simple Memory Writer

This project is my first step into the world of game hacking and memory manipulation. It is a simple tool designed for educational purposes to understand how external programs can communicate with and modify a game's process memory.

I chose **AssaultCube** for this project because it lacks complex anti-cheat systems, making it a perfect environment for beginners to learn the basics of WinAPI and memory addresses.

### How it Works

The tool finds the game's window, attaches to its process, and modifies a specific memory value (like ammo) when a key is pressed. In this version, the value increases automatically while the key is held down to demonstrate real-time memory interaction.

### Technologies & Functions Used

This tool is built using **C++** and the **Windows.h** library to access Windows API functions:

* **FindWindowA**: Locates the game window to ensure it is running.
* **GetWindowThreadProcessId**: Retrieves the unique Process ID (PID) of the game.
* **OpenProcess**: Requests full access rights (`PROCESS_ALL_ACCESS`) to the game's memory space.
* **WriteProcessMemory**: The core function used to overwrite the data at a specific memory address with a new value.
* **GetAsyncKeyState**: Monitors keyboard input to trigger the cheat features during gameplay.

### Important Notes

* You must find the correct memory address using tools like Cheat Engine and update the `address` variable in the code.
* This tool is for **educational purposes only** and should only be used on games without anti-cheat protections.

**By: wex -- 2026/02/11**
