#ifndef VAR1
void FUN1(int VAR2)
{
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR3 = (char)VAR2;
 FUN2(VAR3);
 }
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 FUN1(VAR2);
}
#endif
