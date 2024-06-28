#ifndef VAR1
void FUN1(VAR2 * &VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN3(10*sizeof(VAR2)));
 FUN1(VAR3);
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR3[VAR4].VAR5);
 FUN4(VAR3[VAR4].VAR6);
 }
}
#endif
