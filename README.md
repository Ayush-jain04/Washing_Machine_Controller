# Washing Machine Controller 🚿🌀

## 📌 Project Overview
This project implements a **Washing Machine Controller** capable of handling **12 washing programs** with customizable water levels and user controls. The design simulates the real-world behavior of an automatic washing machine, including program selection, timer control, pause/resume, door safety lock, and buzzer alerts.

The controller provides an interactive interface where users can:
- Select washing programs
- Set water levels
- Start/Stop/Pause/Resume operations
- Handle door lock safety conditions
- Get status updates on a display

---

## 🎯 Features
- **12 Washing Programs**:
  - Daily
  - Heavy
  - Delicates
  - Whites
  - Stain Wash
  - Dry Only
  - Wash Only
  - Aqua Store
  - Woolens
  - Bedsheets
  - Rinse + Dry
  - Eco Cottons

- **4 Water Levels**:
  - Auto
  - Low
  - Medium
  - Max

- **Control Switches**:
  - **Switch 1** → Open Door  
  - **Switch 5** → Start / Resume  
  - **Switch 6** → Pause  
  - **Stop Switch** → Stop the program  

- **Functional Highlights**:
  - Displays selected program and water level.
  - Program timer runs according to program & water level.
  - Door safety lock:  
    - If the door is opened while running, the timer stops, an error "Door is open" is shown, and the buzzer rings until the door is closed.
  - Pause/Resume support during program execution.
  - Completion message:  
    - On program completion → "Program Completed", "Remove Clothes".  
    - Buzzer rings for **2 seconds**.

---

## ⚙️ Working Flow
1. Select a **washing program**.  
2. Select the **water level** (Auto, Low, Medium, Max).  
3. Press **Switch 5 (Start)** → Function screen displays the upcoming action.  
4. Timer starts according to chosen program and water level.  
5. While running:
   - **Switch 6** → Pause
   - **Switch 5** → Resume
   - **Switch 1** → Try to open door → Error + buzzer  
6. When completed → Message displayed + buzzer (2 sec).

---

## 🖥️ Implementation
This project has been implemented as a **controller design**.  
- Input: Switches for program control.  
- Output: Display screen + Buzzer alert.  



---

<!-- ## 📂 Repository Contents
- `src/` → Source code for controller  
- `testbench/` → Testbench files (if applicable)  
- `docs/` → Documentation, diagrams, and design explanation  
- `results/` → Simulation results / screenshots  

---

## 🚀 How to Run
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/washing-machine-controller.git -->
