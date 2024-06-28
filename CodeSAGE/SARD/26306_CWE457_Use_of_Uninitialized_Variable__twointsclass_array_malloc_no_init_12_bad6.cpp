#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(malloc(10*sizeof(VAR2)));
 if(FUN2())
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 else
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
 else
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
}
#endif
