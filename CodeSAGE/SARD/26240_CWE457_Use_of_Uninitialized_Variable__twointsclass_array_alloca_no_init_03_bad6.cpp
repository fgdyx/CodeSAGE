#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(5==5)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
}
#endif
