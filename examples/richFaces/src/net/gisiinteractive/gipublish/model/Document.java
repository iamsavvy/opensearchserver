package net.gisiinteractive.gipublish.model;

// Generated 26 mars 2008 14:53:12 by Hibernate Tools 3.2.1.GA

import java.util.Date;

/**
 * Document generated by hbm2java
 * 
 * @param <K>
 * 
 * 
 */
public class Document implements java.io.Serializable, Cloneable {

	private static final long serialVersionUID = 1L;

	private Long id;
	private Date date;
	private String title;
	private String description;

	public Long getId() {
		return id;
	}

	public void setId(Long id) {
		this.id = id;
	}

	public Date getDate() {
		return date;
	}

	public void setDate(Date date) {
		this.date = date;
	}

	public String getTitle() {
		return title;
	}

	public void setTitle(String title) {
		this.title = title;
	}

	public String getDescription() {
		return description;
	}

	public void setDescription(String description) {
		this.description = description;
	}

}
