#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR4[sizeof(VAR2)];
 VAR2 * VAR5 = new(VAR4) VAR2;
 VAR5->VAR6 = 2;
 VAR5->VAR7 = 2;
 VAR3 = VAR5;
 }
 VAR8* VAR9 = new VAR10;
 VAR9->FUN2(VAR3);
 delete VAR9;
}
#endif
