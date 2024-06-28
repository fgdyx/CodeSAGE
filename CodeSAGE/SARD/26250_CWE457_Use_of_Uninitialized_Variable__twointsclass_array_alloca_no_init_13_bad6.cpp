#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 }
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR3[VAR5].VAR6);
 FUN3(VAR3[VAR5].VAR7);
 }
 }
}
#endif
