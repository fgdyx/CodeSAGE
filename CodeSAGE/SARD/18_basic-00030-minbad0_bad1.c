typedef struct
{
 char VAR1[10];
 int VAR2;
} VAR3;
int main(int argc, char *argv[])
{
 my_struct VAR4[5];
 /* BAD */
 VAR4[4].VAR1[10] = '';
 return 0;
}
