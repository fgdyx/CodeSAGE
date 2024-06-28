#ifndef VAR1
void FUN1(VAR2<int, void *> VAR3)
{
 void * VAR4 = VAR3[2];
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR5 = strlen((char *)VAR4);
 void * VAR6 = (void *)calloc(VAR5+1, 1);
 memcpy(VAR6, VAR4, (VAR5+1));
 FUN2((char *)VAR6);
 free(VAR6);
 }
}
#endif
