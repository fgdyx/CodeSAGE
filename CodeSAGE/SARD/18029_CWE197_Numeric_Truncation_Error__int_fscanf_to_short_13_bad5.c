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
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR4 = (short)VAR2;
 FUN2(VAR4);
 }
}
#endif
