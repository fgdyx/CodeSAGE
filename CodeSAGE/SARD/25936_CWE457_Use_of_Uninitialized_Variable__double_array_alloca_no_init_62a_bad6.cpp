#ifndef VAR1
void FUN1(double * &VAR2);
void FUN2()
{
 double * VAR2;
 VAR2 = (double *)FUN3(10*sizeof(double));
 FUN1(VAR2);
 /* POTENTIAL FLAW: Use data without initializing it */
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN4(VAR2[VAR3]);
 }
 }
}
#endif
