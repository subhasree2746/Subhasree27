# include <stdio.h>
struct student {
    int id;
    char name [30];
    float marks;
};

int main() {
    struct  student student1 = {34, "subhasree", 85};
    struct  student student2;
    
    student2 = student1;
    student2.id = 39;
    strcpy(student2.name, "thilomathi");
    student2.marks = 83;

printf("student 2 id: %d\n", student2.id);
printf("student 2 name: %s\n", student2.name);
printf("student 2 marks: %f\n", student2.marks);

return 0;
}