#ifndef VAR1
void FUN1(double * * VAR2);
void FUN2()
{
 double * VAR3;
 double VAR4[10];
 VAR3 = VAR4;
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR5;
 for(VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5] = (double)VAR5;
 }
 }
 FUN1(&VAR3);
}
#endif
