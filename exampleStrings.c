/**
 *  
 * The student needs to compile, test and comment the source code file.
 * 
 * Enumerate those Rules and Recommendation associated that are broken in the previous source code file.
 * Enumerate he compilation tools and paramenters (gcc vs g++), -Wall ...
 * Enumerate the standard associated  -std=c99, -std=c11
 * 
 * There are several variants. You should choose at least two.
 * At the end the source code  should compile without warnings to the variant selected (you can remove/change instructions).
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char array1[] = "Foo"
                "bar";
char array2[] = {'F', 'o', 'o', 'b', 'a', 'r', '\0'};

enum
{
  BUFFER_MAX_SIZE = 1024
};

const char *s1 = R"foo(
Hello
World
)foo";
const char *s2 = "\nHello\nWorld\n";

void gets_example_func(void)
{
  char buf[BUFFER_MAX_SIZE];

  if (fgets(buf, sizeof(buf), stdin) == NULL)
  {
    return;
  }
  buf[strlen(buf) - 1] = '\0';
}

const char *get_dirname(const char *pathname)
{
  char *slash;
  slash = strrchr(pathname, '/');
  if (slash)
  {
    /**
     * This sentence access to a memory segment not avaliable, so its commented.
     */
      
    // *slash = '\0'; 
  }
  return pathname;
}

void get_y_or_n(void)
{
  char response[8];

  printf("Continue? [y] n: ");
  fgets(response, sizeof(response), stdin);

  if (response[0] == 'n')
    exit(0);

  return;
}

int main(int argc, char *argv[])
{
  /**
   * Unused because the code commented below
   */

  // char key[24];
  char response[8];
  char array3[16];
  /**
   * Unused because the code commented below
   */

  // char array4[16];

  /**
   * Set but not used warning, could do something to use the variable but I rather prefer
   * to not add more code. Just notice the warning it's because of this
   */
  char array5[] = "01234567890123456";

  /**
   * Unused because the code commented below
   */

  // char *ptr_char = "new string literal";

  /**
   * Unused variables, so they're commented
   */

  // char analitic1[size_array1]="аналитик";
  // char analitic2[size_array2]="аналитик";+

  puts(get_dirname(__FILE__));

  /**
   * strcpy and strcat are unsafe options that should be replace strcpy_s and strcat_s 
   * that requires external libraries, so in this case they are commented
   */

  // strcpy(key, argv[1]);
  // strcat(key, " = ");
  // strcat(key, argv[2]);

  fgets(response, sizeof(response), stdin);

  get_y_or_n();

  printf("%s", array1);
  printf("\n");
  printf("%s", array2);
  printf("\n");

  puts(s1);
  printf("\n");
  puts(s2);
  printf("\n");

  /**
   * As below, strcpy and strcat are unsafe options that should be replace strcpy_s and strcat_s 
   * that requires external libraries, so in this case they are commented
   */

  // strncpy(array3, array5, sizeof(array3));
  // strncpy(array4, array3, strlen(array3));

  array5[0] = 'M';

  /**
   * Attemp to modify a string literal, commented because is an undefined behavior
   */

  //ptr_char[0] = 'N';

  array3[sizeof(array3) - 1] = '\0';

  return 0;
}
