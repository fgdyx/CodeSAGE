#ifndef VAR1
void FUN1(void * VAR2[])
{
 void * VAR3 = VAR2[2];
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR4 = strlen((char *)VAR3);
 void * VAR5 = (void *)calloc(VAR4+1, 1);
 memcpy(VAR5, VAR3, (VAR4+1));
 FUN2((char *)VAR5);
 free(VAR5);
 }
}
#endif
