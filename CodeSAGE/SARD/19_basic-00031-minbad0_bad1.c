typedef struct
{
 int VAR1;
 char VAR2[10];
} VAR3;
int main(int argc, char *argv[])
{
 my_struct VAR4[5];
 /* BAD */
 VAR4[4].VAR2[10] = '';
 return 0;
}
