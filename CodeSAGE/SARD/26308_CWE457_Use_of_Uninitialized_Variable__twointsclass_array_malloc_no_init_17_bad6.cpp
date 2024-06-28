#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 VAR4 * VAR5;
 VAR5 = reinterpret_cast<VAR4 *>(malloc(10*sizeof(VAR4)));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR2=0; VAR2<10; VAR2++)
 {
 FUN2(VAR5[VAR2].VAR6);
 FUN2(VAR5[VAR2].VAR7);
 }
 }
}
#endif
