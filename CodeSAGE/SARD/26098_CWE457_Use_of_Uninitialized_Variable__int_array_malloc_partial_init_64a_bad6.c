#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int * VAR3;
 VAR3 = (int *)malloc(10*sizeof(int));
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR3[VAR4] = VAR4;
 }
 }
 FUN1(&VAR3);
}
#endif
