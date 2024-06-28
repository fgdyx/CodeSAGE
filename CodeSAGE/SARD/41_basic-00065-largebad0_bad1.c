void FUN1(char * VAR1, int VAR2)
{
 if (VAR2 > 0)
 {
 FUN1(VAR1, VAR2 - 1);
 }
 /* BAD */
 VAR1[4105] = '';
}
int main(int argc, char *argv[])
{
 char VAR1[10];
 FUN1(VAR1, 3);
 return 0;
}
