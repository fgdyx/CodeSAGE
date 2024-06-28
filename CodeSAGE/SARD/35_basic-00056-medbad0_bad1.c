void FUN1(char * VAR1)
{
 /* BAD */
 VAR1[17] = '';
}
void FUN2(char * VAR1)
{
 FUN1(VAR1);
}
int main(int argc, char *argv[])
{
 char VAR1[10];
 FUN2(VAR1);
 return 0;
}
