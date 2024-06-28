#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR4 = (char)VAR2;
 FUN2(VAR4);
 }
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
