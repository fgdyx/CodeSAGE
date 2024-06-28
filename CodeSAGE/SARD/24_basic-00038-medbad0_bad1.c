int FUN1(int VAR1)
{
 return VAR1;
}
int main(int argc, char *argv[])
{
 char VAR2[10];
 /* BAD */
 VAR2[FUN1(17)] = '';
 return 0;
}
