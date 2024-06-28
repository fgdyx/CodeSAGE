#ifndef VAR1
void FUN1()
{
 {
 struct VAR2 * VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 /* FLAW: If realloc() fails, the initial memory block will not be freed() */
 VAR3 = (struct VAR2 *)realloc(VAR3, (130000)*sizeof(struct VAR2));
 if (VAR3 != NULL)
 {
 VAR3[0].VAR4 = 1;
 VAR3[0].VAR5 = 1;
 FUN2((VAR6 *)&VAR3[0]);
 free(VAR3);
 }
 }
}
#endif
