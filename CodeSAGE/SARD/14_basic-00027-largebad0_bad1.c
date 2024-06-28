typedef struct
{
 char VAR1[10];
} VAR2;
int main(int argc, char *argv[])
{
 my_struct VAR3[5];
 /* BAD */
 VAR3[4].VAR1[4105] = '';
 return 0;
}
