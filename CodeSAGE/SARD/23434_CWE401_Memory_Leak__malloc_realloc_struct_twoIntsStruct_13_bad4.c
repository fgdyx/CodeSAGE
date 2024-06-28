#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 struct VAR3 * VAR4 = (struct VAR3 *)malloc(100*sizeof(struct VAR3));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR4[0]);
 /* FLAW: If realloc() fails, the initial memory block will not be freed() */
 VAR4 = (struct VAR3 *)realloc(VAR4, (130000)*sizeof(struct VAR3));
 if (VAR4 != NULL)
 {
 VAR4[0].VAR5 = 1;
 VAR4[0].VAR6 = 1;
 FUN2((VAR7 *)&VAR4[0]);
 free(VAR4);
 }
 }
 }
}
#endif
