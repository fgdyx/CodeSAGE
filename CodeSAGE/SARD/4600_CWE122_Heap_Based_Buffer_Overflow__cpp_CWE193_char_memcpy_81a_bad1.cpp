#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new char[10];
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
