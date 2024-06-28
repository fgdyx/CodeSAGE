void FUN1(char * VAR1)
{
 /* BAD */
 VAR1[10] = '';
}
int main(int argc, char *argv[])
{
 char VAR1[10];
 FUN1(VAR1);
 return 0;
}
