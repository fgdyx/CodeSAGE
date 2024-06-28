#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (char *)calloc(100, sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 VAR3* VAR4 = new VAR5;
 VAR4->FUN3(VAR2);
 delete VAR4;
}
#endif
