listeDouble convert_string(char *av)
{
	int i;
	unsigned n;
	listeDouble L={NULL,NULL,0};
	n=strlen(av);
	while (i<n)
	{
		ajoutFin(av[i],*L);
		i++
	}
	return L;
}
