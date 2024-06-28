#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = new VAR3[10];
 /* POTENTIAL FLAW: Partially initialize data */
 for(int VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR4[VAR5].VAR6 = VAR5;
 VAR4[VAR5].VAR7 = VAR5;
 }
 FUN1(&VAR4);
}
#endif
