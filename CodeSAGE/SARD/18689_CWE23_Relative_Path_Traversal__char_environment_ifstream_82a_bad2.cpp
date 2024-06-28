#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN2(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR6, VAR7, VAR4-VAR6-1);
 }
 }
 VAR9* VAR10 = new VAR11;
 VAR10->FUN3(VAR2);
 delete VAR10;
}
#endif
