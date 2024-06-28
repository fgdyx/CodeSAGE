#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = new char[10];
 FUN1(&VAR3);
}
#endif
