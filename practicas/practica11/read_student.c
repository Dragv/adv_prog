#include <stdio.h>
#include <string.h>

typedef struct s {
  char name[20];
  char lastName[20];
  unsigned int id;
  unsigned char cal;
} Student;

int main(int argc, char const *argv[]) {
  Student myStudent;
  char *studentDb = "studentDb.data";
  char *lastName = "Perez2";
  FILE *data;

  data = fopen(studentDb, "rb");
  while (1) {
    fread(&myStudent, sizeof(Student), 1, data);
    if (feof(data)) {
      break;
    }
    if (!strcmp(myStudent.lastName, lastName)){
      printf("Name %s \n", myStudent.name);
      printf("Last name %s \n", myStudent.lastName);
      printf("Id %d \n", myStudent.id);
      printf("Grade %d \n", myStudent.cal);
      break;
    }
  }
  fclose(data);
  return 0;
}
