#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 double * VAR3;
 VAR3 = (double *)FUN3(10*sizeof(double));
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR3[VAR4] = (double)VAR4;
 }
 }
 FUN1(&VAR3);
}
#endif
