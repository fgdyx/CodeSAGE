#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = (VAR3 *)malloc(10*sizeof(VAR3));
 /* POTENTIAL FLAW: Partially initialize data */
 {
 int VAR5;
 for(VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR4[VAR5].VAR6 = VAR5;
 VAR4[VAR5].VAR7 = VAR5;
 }
 }
 FUN1(&VAR4);
}
#endif
