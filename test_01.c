// Ejercicio diagnostico - Que hace el siguiente codigo
// ans: imprime 2000

typedef struct student {
    char id[10]; unsigned short birthYear; char name[120];
} Student;

void some_Function(Student someStudent) {
    someStudent.birthYear -= 1;
}

void main() {
    Student otherstudent = {
        "A12345678",
        2000,
        "Pascual Lopez"
    };

    some_Function(otherstudent);
    printf("%d", otherstudent.birthYear);
}