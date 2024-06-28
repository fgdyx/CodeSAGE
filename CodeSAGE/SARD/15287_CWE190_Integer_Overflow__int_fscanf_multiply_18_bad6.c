#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 goto VAR4;
VAR4:
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
 int VAR5 = VAR2 * 2;
 FUN2(VAR5);
 }
}
#endif
