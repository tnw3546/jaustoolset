<?xml version="1.0" encoding="ISO-8859-1"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

	<xsl:template match="/">
		<html>
			<head>
				<title>
					<xsl:value-of select="Index/Name"/>
				</title>
				<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1"/>
				<link rel="stylesheet" href="framedStyleSheet.css"/>
			</head>
			
			<body>
				<h2>
					All Message Definitions
				</h2>
				<table border="1" width="90%" cellpadding="1" cellspacing="1" summary="">
					<tr bgcolor="#cccccc">
						<th>
							Message Definition
						</th>
						<th>
							Description
						</th>
					</tr>
					<xsl:apply-templates select="Index/Item"/>
				</table>
			</body>
		</html>
	</xsl:template>
	
	<xsl:template match="Item">
		<tr>
			<td align="left">
				<div>
					<b>
						<a href="{Url}">		<!-- create hyperlink to message def file -->
							<xsl:value-of select="Name"/>
						</a>
					</b>
				</div>
			</td>
			<td align="left">
				<div>
					<xsl:value-of select="Description"/>
				</div>
			</td>	
		</tr>
	</xsl:template>
	
</xsl:stylesheet>