module lib

fn test_tagged_source_accepts_path_without_recursive_layout() {
	source := AssetSource(TaggedSource{
		source: 'textures/test.png'
		tag:    'preview'
	})
	assert source.str() == 'textures/test.png'
}
