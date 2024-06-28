#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR4 = (char)VAR2;
 FUN2(VAR4);
 }
}
#endif
