#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(short VAR5);
static void FUN2()
{
 short VAR5;
 VAR5 = 0;
 fscanf (stdin, "", &VAR5);
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN3(short VAR5);
static void FUN4()
{
 short VAR5;
 VAR5 = 0;
 fscanf (stdin, "", &VAR5);
 VAR3 = 1;
 FUN3(VAR5);
}
void FUN5(short VAR5);
static void FUN6()
{
 short VAR5;
 VAR5 = 0;
 VAR5 = 2;
 VAR4 = 1;
 FUN5(VAR5);
}
void FUN7()
{
 FUN2();
 FUN4();
 FUN6();
}
#endif
