#ifndef VAR1
void FUN1()
{
 int VAR2;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 VAR3 * VAR4 = (VAR3 *)malloc(100*sizeof(VAR3));
 VAR4[0] = 5LL;
 FUN2(VAR4[0]);
 /* FLAW: If realloc() fails, the initial memory block will not be freed() */
 VAR4 = (VAR3 *)realloc(VAR4, (130000)*sizeof(VAR3));
 if (VAR4 != NULL)
 {
 VAR4[0] = 10LL;
 FUN2(VAR4[0]);
 free(VAR4);
 }
 }
 }
}
#endif
