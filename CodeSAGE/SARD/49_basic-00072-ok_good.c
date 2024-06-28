int FUN1(int VAR1)
{
 if (VAR1 > 0)
 {
 return FUN1(VAR1 - 1);
 }
 else
 {
 return 9;
 }
}
int main(int argc, char *argv[])
{
 int VAR2;
 int (*VAR3)(int);
 char VAR4[10];
 VAR3 = VAR5;
 VAR2 = FUN2(3);
 VAR4[VAR2] = '';
 return 0;
}
