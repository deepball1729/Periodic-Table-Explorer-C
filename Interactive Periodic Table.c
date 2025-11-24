#include <stdio.h>
#include <string.h>

typedef struct {
    int atomicNumber;
    char symbol[3];
    char name[20];
    char category[30];
} Element;

// Full 118 elements
Element elements[] = {
    {1, "H", "Hydrogen", "Non-metal"}, {2, "He", "Helium", "Noble Gas"},
    {3, "Li", "Lithium", "Alkali Metal"}, {4, "Be", "Beryllium", "Alkaline Earth Metal"},
    {5, "B", "Boron", "Metalloid"}, {6, "C", "Carbon", "Non-metal"},
    {7, "N", "Nitrogen", "Non-metal"}, {8, "O", "Oxygen", "Non-metal"},
    {9, "F", "Fluorine", "Halogen"}, {10, "Ne", "Neon", "Noble Gas"},
    {11, "Na", "Sodium", "Alkali Metal"}, {12, "Mg", "Magnesium", "Alkaline Earth Metal"},
    {13, "Al", "Aluminium", "Post-transition Metal"}, {14, "Si", "Silicon", "Metalloid"},
    {15, "P", "Phosphorus", "Non-metal"}, {16, "S", "Sulfur", "Non-metal"},
    {17, "Cl", "Chlorine", "Halogen"}, {18, "Ar", "Argon", "Noble Gas"},
    {19, "K", "Potassium", "Alkali Metal"}, {20, "Ca", "Calcium", "Alkaline Earth Metal"},
    {21, "Sc", "Scandium", "Transition Metal"}, {22, "Ti", "Titanium", "Transition Metal"},
    {23, "V", "Vanadium", "Transition Metal"}, {24, "Cr", "Chromium", "Transition Metal"},
    {25, "Mn", "Manganese", "Transition Metal"}, {26, "Fe", "Iron", "Transition Metal"},
    {27, "Co", "Cobalt", "Transition Metal"}, {28, "Ni", "Nickel", "Transition Metal"},
    {29, "Cu", "Copper", "Transition Metal"}, {30, "Zn", "Zinc", "Transition Metal"},
    {31, "Ga", "Gallium", "Post-transition Metal"}, {32, "Ge", "Germanium", "Metalloid"},
    {33, "As", "Arsenic", "Metalloid"}, {34, "Se", "Selenium", "Non-metal"},
    {35, "Br", "Bromine", "Halogen"}, {36, "Kr", "Krypton", "Noble Gas"},
    {37, "Rb", "Rubidium", "Alkali Metal"}, {38, "Sr", "Strontium", "Alkaline Earth Metal"},
    {39, "Y", "Yttrium", "Transition Metal"}, {40, "Zr", "Zirconium", "Transition Metal"},
    {41, "Nb", "Niobium", "Transition Metal"}, {42, "Mo", "Molybdenum", "Transition Metal"},
    {43, "Tc", "Technetium", "Transition Metal"}, {44, "Ru", "Ruthenium", "Transition Metal"},
    {45, "Rh", "Rhodium", "Transition Metal"}, {46, "Pd", "Palladium", "Transition Metal"},
    {47, "Ag", "Silver", "Transition Metal"}, {48, "Cd", "Cadmium", "Transition Metal"},
    {49, "In", "Indium", "Post-transition Metal"}, {50, "Sn", "Tin", "Post-transition Metal"},
    {51, "Sb", "Antimony", "Metalloid"}, {52, "Te", "Tellurium", "Metalloid"},
    {53, "I", "Iodine", "Halogen"}, {54, "Xe", "Xenon", "Noble Gas"},
    {55, "Cs", "Cesium", "Alkali Metal"}, {56, "Ba", "Barium", "Alkaline Earth Metal"},
    {57, "La", "Lanthanum", "Lanthanide"}, {58, "Ce", "Cerium", "Lanthanide"},
    {59, "Pr", "Praseodymium", "Lanthanide"}, {60, "Nd", "Neodymium", "Lanthanide"},
    {61, "Pm", "Promethium", "Lanthanide"}, {62, "Sm", "Samarium", "Lanthanide"},
    {63, "Eu", "Europium", "Lanthanide"}, {64, "Gd", "Gadolinium", "Lanthanide"},
    {65, "Tb", "Terbium", "Lanthanide"}, {66, "Dy", "Dysprosium", "Lanthanide"},
    {67, "Ho", "Holmium", "Lanthanide"}, {68, "Er", "Erbium", "Lanthanide"},
    {69, "Tm", "Thulium", "Lanthanide"}, {70, "Yb", "Ytterbium", "Lanthanide"},
    {71, "Lu", "Lutetium", "Lanthanide"}, {72, "Hf", "Hafnium", "Transition Metal"},
    {73, "Ta", "Tantalum", "Transition Metal"}, {74, "W", "Tungsten", "Transition Metal"},
    {75, "Re", "Rhenium", "Transition Metal"}, {76, "Os", "Osmium", "Transition Metal"},
    {77, "Ir", "Iridium", "Transition Metal"}, {78, "Pt", "Platinum", "Transition Metal"},
    {79, "Au", "Gold", "Transition Metal"}, {80, "Hg", "Mercury", "Transition Metal"},
    {81, "Tl", "Thallium", "Post-transition Metal"}, {82, "Pb", "Lead", "Post-transition Metal"},
    {83, "Bi", "Bismuth", "Post-transition Metal"}, {84, "Po", "Polonium", "Metalloid"},
    {85, "At", "Astatine", "Halogen"}, {86, "Rn", "Radon", "Noble Gas"},
    {87, "Fr", "Francium", "Alkali Metal"}, {88, "Ra", "Radium", "Alkaline Earth Metal"},
    {89, "Ac", "Actinium", "Actinide"}, {90, "Th", "Thorium", "Actinide"},
    {91, "Pa", "Protactinium", "Actinide"}, {92, "U", "Uranium", "Actinide"},
    {93, "Np", "Neptunium", "Actinide"}, {94, "Pu", "Plutonium", "Actinide"},
    {95, "Am", "Americium", "Actinide"}, {96, "Cm", "Curium", "Actinide"},
    {97, "Bk", "Berkelium", "Actinide"}, {98, "Cf", "Californium", "Actinide"},
    {99, "Es", "Einsteinium", "Actinide"}, {100, "Fm", "Fermium", "Actinide"},
    {101, "Md", "Mendelevium", "Actinide"}, {102, "No", "Nobelium", "Actinide"},
    {103, "Lr", "Lawrencium", "Actinide"}, {104, "Rf", "Rutherfordium", "Transition Metal"},
    {105, "Db", "Dubnium", "Transition Metal"}, {106, "Sg", "Seaborgium", "Transition Metal"},
    {107, "Bh", "Bohrium", "Transition Metal"}, {108, "Hs", "Hassium", "Transition Metal"},
    {109, "Mt", "Meitnerium", "Transition Metal"}, {110, "Ds", "Darmstadtium", "Transition Metal"},
    {111, "Rg", "Roentgenium", "Transition Metal"}, {112, "Cn", "Copernicium", "Transition Metal"},
    {113, "Nh", "Nihonium", "Post-transition Metal"}, {114, "Fl", "Flerovium", "Post-transition Metal"},
    {115, "Mc", "Moscovium", "Post-transition Metal"}, {116, "Lv", "Livermorium", "Post-transition Metal"},
    {117, "Ts", "Tennessine", "Halogen"}, {118, "Og", "Oganesson", "Noble Gas"}
};

int elementCount = sizeof(elements)/sizeof(elements[0]);

void printPeriodicTable() {
    printf("\nModern Periodic Table (Atomic Number - Symbol)\n\n");
    for (int i = 0; i < elementCount; i++) {
        printf("%3d %-3s  ", elements[i].atomicNumber, elements[i].symbol);
        if ((i+1)%10 == 0) printf("\n"); // new line after 10 elements for readability
    }
    printf("\n");
}

void searchByAtomicNumber() {
    int num, found = 0;
    printf("Enter Atomic Number: ");
    scanf("%d", &num);
    for (int i = 0; i < elementCount; i++) {
        if (elements[i].atomicNumber == num) {
            printf("Element: %s (%s), Category: %s\n", elements[i].name, elements[i].symbol, elements[i].category);
            found = 1;
            break;
        }
    }
    if (!found) printf("Element not found.\n");
}

void searchBySymbol() {
    char sym[3];
    int found = 0;
    printf("Enter Symbol: ");
    scanf("%s", sym);
    for (int i = 0; i < elementCount; i++) {
        if (strcmp(elements[i].symbol, sym) == 0) {
            printf("Element: %s, Atomic Number: %d, Category: %s\n", elements[i].name, elements[i].atomicNumber, elements[i].category);
            found = 1;
            break;
        }
    }
    if (!found) printf("Element not found.\n");
}

int main() {
    int choice;
    do {
        printf("\n=== Modern Periodic Table list coded by Deep ===\n");
        printf("1. Print Periodic Table\n");
        printf("2. Search by Atomic Number\n");
        printf("3. Search by Symbol\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printPeriodicTable();
                break;
            case 2:
                searchByAtomicNumber();
                break;
            case 3:
                searchBySymbol();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    } while(choice != 4);

    return 0;
}