# Periodic-Table-Explorer-C
A; C- based console applications that displays the modern periodic table and allows users to search for elements by atomic number or symbol, providing a quick and interactive way to explore chemical elements and their categories.


Unique - My project covers all 118 elements and I have used struct keyword to store real -life chemical database.


// Extra Features added -a) Complete database of all 118 elements, not just first 20 0r 30.
                         b) We can search the element by atomic number and element symbol.

                         
// Programming Techniques Used - a) Use of struct (is used to store atomic number , symbol,name ,catogory )and typedef is used so we can create a new simple name(Element) instead of writing struct repeatedly.
                                 b) Array of structure (All 118 elements are stored as an array containing multiple structure values)
                                 c) Menu- Driven programming (The programm repeatedly shows a choices and executes based on user selection)-- It makes the program interactive , letting users choose different 
                                    operations(print table , search ,exit).
                                 d) Linear search Technique (Searching element one by one from the array to find matching) 
                                 e) String Handling Technique ( Used for comparision symbol and taking symbol from input)
                                 f) Uses of controlled statement (for, do- while , if -else , Switch case)
                                 g) Use of global variable (elementcount is declared globally , so all functions can access it without passing as a parameter)


                                 
 // I used C programming language because it allows efficient memory usage , fast processing , and supports structure. This helps in storing complete data of 118 elements and enables quick searching like a real chemical databases.

 
 // I used printf() , scanf() as a library functions and searchByNumber();SearchBysymbol();displayAllElements(); as a user-defined functions.

 
 ** Explanation of of project features**
 1. Full Display of Modern Periodic Table
    // The system print all 118 elements in a formatted manner showing :
      . Atomic Number
      . Chemical Symbol
2. Search by Atomic Number
    // The model allows the user to enter any atomic number (1-118) and then provides:
       . Element name
       . Symbol
       . Category ( Alkali Metal, Halogen , Nobel gas)
3. Search by element symbol
   // Users can type any chemical symbol (like H, Fe , Na, Cl) an the program displays:
       . Element name
       . Atomic Number
       . Category

   
   ** How the system /Model Works
   1. Program Starts and displays a user menu.
   2. The user chooses an operation:
     //View full periodic table
    //Search element by atomic number
    //Search element by symbol
    //Exit the program
  3. Based on the selection:
The corresponding function is called.
The program searches the array of struct elements using loops (for or strcmp).
4. If the data is found, it prints element details.
5. If no match exists, the system shows “Element Not Found”.
6. The program returns to the menu again until the user exits.
   ************************* Output of the program*************************************
    
<img width="850" height="484" alt="Screenshot 2025-11-25 102937" src="https://github.com/user-attachments/assets/4be5ca92-f311-4b51-a0ee-ab22732dcf47" />
<img width="775" height="200" alt="Screenshot 2025-11-25 102955" src="https://github.com/user-attachments/assets/3ebe02e2-3732-4b9a-8640-e5155ba10bcf" />
<img width="795" height="189" alt="Screenshot 2025-11-25 103009" src="https://github.com/user-attachments/assets/971c4615-3a9d-43b7-bbe3-946dbb20ec45" />
<img width="853" height="201" alt="Screenshot 2025-11-25 103021" src="https://github.com/user-attachments/assets/6eb0869c-d1d0-44d5-adbd-63be6d042f4c" />


    
 
