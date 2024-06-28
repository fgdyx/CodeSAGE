#ifndef VAR1
void FUN1(void * VAR2)
{
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR3 = strlen((char *)VAR2);
 void * VAR4 = (void *)calloc(VAR3+1, 1);
 memcpy(VAR4, VAR2, (VAR3+1));
 FUN2((char *)VAR4);
 free(VAR4);
 }
}
#endif
