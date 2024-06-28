#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 VAR4 * VAR5;
 VAR5 = reinterpret_cast<VAR4 *>(FUN2(10*sizeof(VAR4)));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Partially initialize data */
 for(int VAR2=0; VAR2<(10/2); VAR2++)
 {
 VAR5[VAR2].VAR6 = VAR2;
 VAR5[VAR2].VAR7 = VAR2;
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR2=0; VAR2<10; VAR2++)
 {
 FUN3(VAR5[VAR2].VAR6);
 FUN3(VAR5[VAR2].VAR7);
 }
 }
}
#endif
