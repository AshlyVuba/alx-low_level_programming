/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: A pointer to the dog to free.
 *
 * Description: This function frees the memory allocated for the dog's
 * name, owner, and the dog structure itself.
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        /* Free the memory for the name and owner strings */
        if (d->name != NULL)
            free(d->name);
        if (d->owner != NULL)
            free(d->owner);

        /* Free the memory for the dog structure */
        free(d);
    }
}
