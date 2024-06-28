#ifndef VAR1
void FUN1();
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 TwoIntsClass VAR4;
 VAR4.VAR5 = 1;
 VAR4.VAR6 = 1;
 VAR3 = &VAR4;
 }
 VAR7 = VAR3;
 FUN1();
}
#endif
